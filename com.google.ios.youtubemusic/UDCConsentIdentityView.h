//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UDCConsentItem-Protocol.h"

@class GTLRUserDataControls_TextResource, NSString, UILabel;

@interface UDCConsentIdentityView : UIView <UDCConsentItem>
{
    GTLRUserDataControls_TextResource *_identity;
    UILabel *_identityLabel;
    UIView *_separator;
    double _horizontalMargin;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)resourceKeys;
- (id)initWithIdentity:(id)arg1 consentParams:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

