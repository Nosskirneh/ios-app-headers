//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPremiumDestinationValueCardComponentView.h"

@class GLUEGradientView, UIImageView;

@interface SPTPremiumDestinationValueCardPremiumComponentView : SPTPremiumDestinationValueCardComponentView
{
    UIImageView *_imageView;
    GLUEGradientView *_gradientView;
}

@property(retain, nonatomic) GLUEGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

