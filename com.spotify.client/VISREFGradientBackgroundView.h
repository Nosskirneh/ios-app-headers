//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "VISREFHeaderComponent-Protocol.h"

@class NSString, VISREFGradientView;

@interface VISREFGradientBackgroundView : UIView <VISREFHeaderComponent>
{
    VISREFGradientView *_gradientView;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) VISREFGradientView *gradientView; // @synthesize gradientView=_gradientView;
- (void).cxx_destruct;
- (void)setAssociatedColor:(id)arg1 adjustBrightness:(_Bool)arg2;
- (void)headerViewNormalizedProgressUpdate:(double)arg1;
- (void)setupLayout;
- (void)setup;
- (id)initWithHeaderHeight:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

