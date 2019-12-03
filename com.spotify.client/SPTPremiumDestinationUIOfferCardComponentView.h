//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBComponentView.h"

#import "HUBComponentViewWithChildren-Protocol.h"

@class GLUEGradientView, NSArray, SPTPremiumDestinationUIGLUETheme, SPTPremiumDestinationUIOfferCardStyle, UIStackView;
@protocol HUBComponentViewChildDelegate;

@interface SPTPremiumDestinationUIOfferCardComponentView : HUBComponentView <HUBComponentViewWithChildren>
{
    id <HUBComponentViewChildDelegate> _childDelegate;
    SPTPremiumDestinationUIGLUETheme *_theme;
    SPTPremiumDestinationUIOfferCardStyle *_style;
    NSArray *_childComponentViews;
    GLUEGradientView *_gradientView;
    UIStackView *_stackView;
}

@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) GLUEGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(copy, nonatomic) NSArray *childComponentViews; // @synthesize childComponentViews=_childComponentViews;
@property(retain, nonatomic) SPTPremiumDestinationUIOfferCardStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) SPTPremiumDestinationUIGLUETheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <HUBComponentViewChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
- (void).cxx_destruct;
- (void)setupChildComponentViewsForModel:(id)arg1;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (void)setupConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

