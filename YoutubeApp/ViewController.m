//
//  ViewController.m
//  YoutubeApp
//
//  Created by Robert Shrestha on 4/21/17.
//  Copyright © 2017 Robert Shrestha. All rights reserved.
//

#import "ViewController.h"
#import "HTTPRequestHandler.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSString* channelID=@"UCBkNpeyvBO2TdPGVC_PsPUA";
    NSString* YOUTUBEAPIKEY=@"AIzaSyDzrIplc-gRzsviQyn8ndTv7Usaa4SvBdU";
    // Do any additional setup after loading the view, typically from a nib.
    NSDictionary* userData=@{
                             
                             };
    [HTTPRequestHandler HTTPGetMethod:[NSString stringWithFormat:@"https://www.googleapis.com/youtube/v3/playlists?part=snippet&channelId=%@&key=%@",channelID,YOUTUBEAPIKEY] andParameter:userData andSelector:@selector(getData:) andTarget:self];
    
    
    
}
-(void)getData:(id)response{
    NSLog(@"the response is %@",[response valueForKey:@"items"]);
    NSArray* items=[response valueForKey:@"items"];
    NSLog(@"the items is %@",[items objectAtIndex:0]);
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
    
}


@end
