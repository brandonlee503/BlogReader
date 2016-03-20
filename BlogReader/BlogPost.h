//
//  BlogPost.h
//  BlogReader
//
//  Created by Brandon Lee on 3/19/16.
//  Copyright © 2016 Brandon Lee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *author;
@property (nonatomic, strong) NSString *thumbnail;

// Designated Initializer
- (id) initWithTitle:(NSString *)title;
+ (id) blogPostWithTitle:(NSString *)title;
- (NSURL *) thumbnailURL;

@end
