//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol SPTFeedbackManager <NSObject>
- (void)removeFeedbackForEntityURI:(NSURL *)arg1 onContextURI:(NSURL *)arg2 subcontextURI:(NSURL *)arg3 viewURI:(NSURL *)arg4 reason:(NSString *)arg5 backendURL:(NSURL *)arg6 feature:(NSString *)arg7 actions:(NSString *)arg8 success:(void (^)(NSURL *))arg9 failure:(void (^)(NSURL *, NSError *))arg10;
- (void)dislikeEntityURI:(NSURL *)arg1 onContextURI:(NSURL *)arg2 subcontextURI:(NSURL *)arg3 viewURI:(NSURL *)arg4 reason:(NSString *)arg5 backendURL:(NSURL *)arg6 feature:(NSString *)arg7 actions:(NSString *)arg8 success:(void (^)(NSURL *))arg9 failure:(void (^)(NSURL *, NSError *))arg10;
- (void)likeEntityURI:(NSURL *)arg1 onContextURI:(NSURL *)arg2 subcontextURI:(NSURL *)arg3 viewURI:(NSURL *)arg4 reason:(NSString *)arg5 backendURL:(NSURL *)arg6 feature:(NSString *)arg7 actions:(NSString *)arg8 success:(void (^)(NSURL *))arg9 failure:(void (^)(NSURL *, NSError *))arg10;
@end

