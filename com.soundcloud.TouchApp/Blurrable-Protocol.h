//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage, Urn;

@protocol Blurrable <NSObject>
- (void)blurImage:(UIImage *)arg1 forUrn:(Urn *)arg2 then:(void (^)(UIImage *))arg3;
@end

