//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GRWMessage;
@protocol GRWMessagingContentControllerDelegate;

@protocol GRWMessagingContentControllerProtocol <NSObject>
+ (id)new;
@property(nonatomic) __weak id <GRWMessagingContentControllerDelegate> delegate;
- (id)init;
- (id)initWithMessage:(GRWMessage *)arg1;
@end

