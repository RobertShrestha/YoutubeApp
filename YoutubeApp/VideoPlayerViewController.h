//
//  VideoPlayerViewController.h
//  YoutubeApp
//
//  Created by Robert Shrestha on 4/22/17.
//  Copyright © 2017 Robert Shrestha. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YTPlayerView.h"

@interface VideoPlayerViewController : UIViewController<YTPlayerViewDelegate>
@property (weak, nonatomic) IBOutlet YTPlayerView *playerView;

@property(nonatomic, weak) IBOutlet UIButton *playButton;
@property(nonatomic, weak) IBOutlet UIButton *pauseButton;
@property(nonatomic, weak) IBOutlet UIButton *stopButton;
@property(nonatomic, weak) IBOutlet UIButton *startButton;
@property(nonatomic, weak) IBOutlet UIButton *reverseButton;
@property(nonatomic, weak) IBOutlet UIButton *forwardButton;


@property(nonatomic, weak) IBOutlet UISlider *slider;

- (IBAction)onSliderChange:(id)sender;

- (IBAction)buttonPressed:(id)sender;

@property(nonatomic,strong) NSString* videoID;

@end
