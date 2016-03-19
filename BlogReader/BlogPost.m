//
//  BlogPost.m
//  BlogReader
//
//  Created by Brandon Lee on 3/19/16.
//  Copyright © 2016 Brandon Lee. All rights reserved.
//

#import "BlogPost.h"

@implementation BlogPost

- (id) initWithTitle:(NSString *)title {
    self = [super init];
    
    if (self) {
        self.title = title;
    }
    
    return self;
}

+ (id) blogPostWithTitle:(NSString *)title {
    return [[self alloc] initWithTitle:title];
}

@end