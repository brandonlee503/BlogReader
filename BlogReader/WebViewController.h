//
//  WebViewController.h
//  BlogReader
//
//  Created by Brandon Lee on 3/20/16.
//  Copyright © 2016 Brandon Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController

@property (strong, nonatomic) NSURL *blogPostURL;
@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end
