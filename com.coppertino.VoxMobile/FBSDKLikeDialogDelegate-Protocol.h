//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSDKLikeDialog, NSDictionary, NSError;

@protocol FBSDKLikeDialogDelegate <NSObject>
- (void)likeDialog:(FBSDKLikeDialog *)arg1 didFailWithError:(NSError *)arg2;
- (void)likeDialog:(FBSDKLikeDialog *)arg1 didCompleteWithResults:(NSDictionary *)arg2;
@end

