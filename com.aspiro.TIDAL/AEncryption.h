//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WMPEncryptionItem;
@protocol EncryptionStrategyDelegate;

@interface AEncryption : NSObject
{
    id <EncryptionStrategyDelegate> _strategyDelegate;
    CDUnknownBlockType _completitionBlock;
    WMPEncryptionItem *_encryptionItem;
}

@property(readonly, nonatomic) WMPEncryptionItem *encryptionItem; // @synthesize encryptionItem=_encryptionItem;
@property(readonly, copy, nonatomic) CDUnknownBlockType completitionBlock; // @synthesize completitionBlock=_completitionBlock;
@property(readonly, nonatomic) __weak id <EncryptionStrategyDelegate> strategyDelegate; // @synthesize strategyDelegate=_strategyDelegate;
- (void).cxx_destruct;
- (void)decryptItem:(id)arg1 delegate:(id)arg2;
- (void)encryptItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateEncryptionForItem:(id)arg1 encryptionType:(long long)arg2;
- (id)headerFilePath:(id)arg1;
- (id)contentFilePath:(id)arg1;

@end

