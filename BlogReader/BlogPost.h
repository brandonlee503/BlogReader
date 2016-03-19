//
//  BlogPost.h
//  BlogReader
//
//  Created by Brandon Lee on 3/19/16.
//  Copyright © 2016 Brandon Lee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject {
    NSString *title;
    NSString *author;
}

- (void) setTitle:(NSString *)title;
- (NSString *) title;

@end
