class Recipe:
    def __init__(self, name, cooking_lvl, cooking_time, ingredients, description, recipe_type):
        self.name = name
        self.cooking_lvl = cooking_lvl
        self.cooking_time = cooking_time
        self.ingredients = ingredients
        self.description = description
        self.recipe_type = recipe_type

    def __str__(self):
        """Return the string to print with the recipe info"""
        return 'name: {self.name}\ncooking_lvl: {self.cooking_lvl}\ncooking_time: {self.cooking_time}\ningredients: {self.ingredients}\ndescription: {self.description}\nrecipe_type: {self.recipe_type}\n'.format(self=self)

    def check_pass_fail(self):
        l = ['starter', 'lunch', 'desert']
        if type(self.name) != str or type(self.ingredients) != list or type(self.description) != str or type(self.cooking_time) != int:
            return False
        # if not self.cooking_lvl in range(1, 6):
        if not (1 <= self.cooking_lvl <= 5):
            return False
        if isinstance(self.recipe_type, str):
            for w in l:
                if self.recipe_type == w:
                    return True
        else:
            return False