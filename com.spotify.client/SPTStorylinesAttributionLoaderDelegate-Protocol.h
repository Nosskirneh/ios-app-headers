//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FollowModel, NSURL, UIImage;

@protocol SPTStorylinesAttributionLoaderDelegate <NSObject>
- (void)didLoadFollowModel:(FollowModel *)arg1;
- (void)didLoadAvatarImage:(UIImage *)arg1 forArtist:(NSURL *)arg2;
@end
