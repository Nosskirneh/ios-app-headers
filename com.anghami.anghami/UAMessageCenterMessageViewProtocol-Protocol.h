//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, UAInboxMessage;

@protocol UAMessageCenterMessageViewProtocol
@property(copy, nonatomic) CDUnknownBlockType closeBlock;
@property(readonly, nonatomic) UAInboxMessage *message;
- (void)loadMessageForID:(NSString *)arg1 onlyIfChanged:(_Bool)arg2 onError:(void (^)(void))arg3;
- (void)loadMessage:(UAInboxMessage *)arg1 onlyIfChanged:(_Bool)arg2;
@end

