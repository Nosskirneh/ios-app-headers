//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "ReusableView-Protocol.h"

@class NSString;

@interface CollectionSectionView : UICollectionReusableView <ReusableView>
{
    long long _section;
}

+ (id)identifier;
@property(nonatomic) long long section; // @synthesize section=_section;
- (id)handlerForAction:(SEL)arg1;
- (_Bool)shouldForwardActionWithSender:(id)arg1;
- (id)signatureForAction:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)applyLayoutAttributes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

