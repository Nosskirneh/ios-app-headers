//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MDCFlexibleHeaderScrollViewInfo : NSObject
{
    _Bool _hasInjectedTopContentInset;
    _Bool _stashedHeightIsValid;
    double _injectedTopContentInset;
    double _injectedTopScrollIndicatorInset;
    double _stashedHeight;
}

@property(nonatomic) _Bool stashedHeightIsValid; // @synthesize stashedHeightIsValid=_stashedHeightIsValid;
@property(nonatomic) double stashedHeight; // @synthesize stashedHeight=_stashedHeight;
@property(nonatomic) double injectedTopScrollIndicatorInset; // @synthesize injectedTopScrollIndicatorInset=_injectedTopScrollIndicatorInset;
@property(nonatomic) _Bool hasInjectedTopContentInset; // @synthesize hasInjectedTopContentInset=_hasInjectedTopContentInset;
@property(nonatomic) double injectedTopContentInset; // @synthesize injectedTopContentInset=_injectedTopContentInset;

@end

