//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTMealbarPromoViewAppearanceProvider-Protocol.h"

@class FLXLayout, NSString;

@interface YTMMealbarAppearanceProvider : NSObject <YTMealbarPromoViewAppearanceProvider>
{
}

+ (id)resourceBundle;
- (id)backgroundColorForPageStyle:(long long)arg1;
@property(readonly, nonatomic) FLXLayout *noWrapLayout;
@property(readonly, nonatomic) FLXLayout *wrapLayout;
@property(readonly, nonatomic) CDUnknownBlockType messageLabelStyleBlock;
@property(readonly, nonatomic) CDUnknownBlockType titleLabelStyleBlock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

