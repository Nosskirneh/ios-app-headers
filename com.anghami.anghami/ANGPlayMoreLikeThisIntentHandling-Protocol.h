//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ANGPlayMoreLikeThisIntent;

@protocol ANGPlayMoreLikeThisIntentHandling <NSObject>
- (void)handlePlayMoreLikeThis:(ANGPlayMoreLikeThisIntent *)arg1 completion:(void (^)(ANGPlayMoreLikeThisIntentResponse *))arg2;

@optional
- (void)confirmPlayMoreLikeThis:(ANGPlayMoreLikeThisIntent *)arg1 completion:(void (^)(ANGPlayMoreLikeThisIntentResponse *))arg2;
@end
