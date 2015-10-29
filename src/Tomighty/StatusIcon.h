//
//  StatusItemManager.h
//  Tomighty
//
//  Created by Célio Cidral Jr on 23/07/13.
//  Copyright (c) 2013 Célio Cidral Jr. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface StatusIcon : NSObject

- (id)initWithStatusMenu:(NSMenu*)statusMenu;

- (void)normal;
- (void)pomodoro;
- (void)shortBreak;
- (void)longBreak;
- (void)setTitle: (NSString *)title;

@end
