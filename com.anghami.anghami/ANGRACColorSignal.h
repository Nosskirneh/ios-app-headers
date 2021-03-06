//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGRACSignal.h"

@class UIColor;

@interface ANGRACColorSignal : ANGRACSignal
{
    UIColor *_lightColor;
    UIColor *_darkColor;
}

@property(retain, nonatomic) UIColor *darkColor; // @synthesize darkColor=_darkColor;
@property(retain, nonatomic) UIColor *lightColor; // @synthesize lightColor=_lightColor;
- (void).cxx_destruct;
@property(readonly, nonatomic) id coloredImageMap;
@property(readonly, nonatomic) id cgColorMap;
- (void)addButtonTitleSubscriber:(id)arg1;
- (void)addSubscriber:(id)arg1 withColorBlock:(CDUnknownBlockType)arg2;
- (id)initWithLightColor:(id)arg1 darkColor:(id)arg2;

@end

