//
//  WebViewController.m
//  BlogReader
//
//  Created by Brandon Lee on 3/20/16.
//  Copyright © 2016 Brandon Lee. All rights reserved.
//

#import "WebViewController.h"

@implementation WebViewController : UIViewController

-(id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    self = [super initWithNibName:nibBundleOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initalization
    }
    return self;
}

-(void)viewDidLoad {
    [super viewDidLoad];
    NSURLRequest *urlRequest = [NSURLRequest requestWithURL:self.blogPostURL];
    [self.webView loadRequest:urlRequest];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

@end
