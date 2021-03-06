//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FXKeychain;

@interface VOXExternalStoreActivationManager : NSObject
{
    FXKeychain *_keyChain;
}

+ (id)shared;
@property(retain, nonatomic) FXKeychain *keyChain; // @synthesize keyChain=_keyChain;
- (void).cxx_destruct;
- (void)clearRadioRedeemData;
- (id)radioRedeemReceipt;
- (id)receiptForProduct:(id)arg1;
- (void)clearProductActivationData:(id)arg1;
- (void)_rememberActivationOfProduct:(id)arg1 withData:(id)arg2;
- (_Bool)verifySignature:(id)arg1 data:(id)arg2;
- (id)deviceId;
- (void)sendActivationRequestWithProduct:(id)arg1 andLicenseNumber:(id)arg2 complitionHandler:(CDUnknownBlockType)arg3;
- (void)activateProductFromUrl:(id)arg1 withComplitionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isProductActivationUrl:(id)arg1;
- (id)radioReceipt;
- (void)clearRadioActivationData;
- (_Bool)isRadioActivated;
- (_Bool)isProductActivated:(id)arg1;

@end

