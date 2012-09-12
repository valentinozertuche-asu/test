//
//  ModelController.h
//  test
//
//  Created by Valentino Zertuche on 9/12/12.
//  Copyright (c) 2012 Valentino Zertuche. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
