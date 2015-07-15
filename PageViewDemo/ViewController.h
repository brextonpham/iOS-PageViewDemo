//
//  ViewController.h
//  PageViewDemo
//
//  Created by Brexton Pham on 7/15/15.
//  Copyright (c) 2015 Brexton Pham. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PageContentViewController.h"

@interface ViewController : UIViewController <UIPageViewControllerDataSource>

- (IBAction)startWalkthrough:(id)sender;
@property (strong, nonatomic)UIPageViewController *pageViewController;
@property (strong, nonatomic)NSArray *pageTitles;
@property (strong, nonatomic)NSArray *pageImages;

@end

