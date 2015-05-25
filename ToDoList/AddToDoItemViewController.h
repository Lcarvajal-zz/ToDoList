//
//  AddToDoItemViewController.h
//  ToDoList
//
//  Created by Lukas Carvajal on 5/17/15.
//  Copyright (c) 2015 Lukas Carvajal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ToDoItem.h"

@interface AddToDoItemViewController : UIViewController

// we declare it here so that the ToDoListTableViewController has access to it
@property ToDoItem *toDoItem;

@end
