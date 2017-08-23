//
//  BGViewController.m
//  BaseModule
//
//  Created by zhb_mymail@163.com on 08/21/2017.
//  Copyright (c) 2017 zhb_mymail@163.com. All rights reserved.
//  

#import "BGViewController.h"
#import <BaseModule/NSString+CategoryFile.h>

@interface BGViewController ()

@end

@implementation BGViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    NSString *adaf = @"  hello  world ! hello  world   ! hello  world ! hello  world ! hello  world ! fadsfa ";
    adaf = [NSString str_deleteRedundanceSpaceBar:adaf];
    
    NSLog(@"%@", adaf);
    



}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
