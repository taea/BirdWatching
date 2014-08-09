//
//  BirdsDetailViewController.h
//  BirdWatching
//
//  Created by TAE on 2014/08/03.
//  Copyright (c) 2014年 TAEKO AKATSUKA. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BirdsDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
