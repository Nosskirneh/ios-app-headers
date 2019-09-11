//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBComponentView.h"

#import "HUBComponentViewWithChildren-Protocol.h"

@class GLUELabel, NSMutableArray, UIView;
@protocol GLUETheme, HUBComponentViewChildDelegate;

@interface SPTFreeTierUIServiceFooterComponentView : HUBComponentView <HUBComponentViewWithChildren>
{
    id <HUBComponentViewChildDelegate> childDelegate;
    id <GLUETheme> _theme;
    UIView *_textContainer;
    GLUELabel *_titleLabel;
    GLUELabel *_descriptionLabel;
    HUBComponentView *_actionComponentView;
    NSMutableArray *_layoutConstraints;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(retain, nonatomic) NSMutableArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) HUBComponentView *actionComponentView; // @synthesize actionComponentView=_actionComponentView;
@property(retain, nonatomic) GLUELabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *textContainer; // @synthesize textContainer=_textContainer;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <HUBComponentViewChildDelegate> childDelegate; // @synthesize childDelegate;
- (void).cxx_destruct;
- (void)setupChildComponentsForMode:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (id)createDescription;
- (id)createTitle;
- (void)setupTextContent;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

