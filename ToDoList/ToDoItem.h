//
//  ToDoItem.h
//  ToDoList
//
//  Created by Lukas Carvajal on 5/17/15.
//  Copyright (c) 2015 Lukas Carvajal. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
