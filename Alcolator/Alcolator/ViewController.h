//
//  ViewController.h
//  Alcolator
//
//  Created by Melissa Boring on 9/20/15.
//  Copyright © 2015 Bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;

 - (void)buttonPressed:(UIButton *)sender;

@end

