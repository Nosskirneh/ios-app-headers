//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FBSDKSharingContent, FBSDKSharingDelegate;

@protocol FBSDKSharing <NSObject>
@property(nonatomic) _Bool shouldFailOnDataError;
@property(copy, nonatomic) id <FBSDKSharingContent> shareContent;
@property(nonatomic) __weak id <FBSDKSharingDelegate> delegate;
- (_Bool)validateWithError:(id *)arg1;
@end

