//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUBComponentView.h"

#import "EXP_HUBComponentViewWithEvents.h"
#import "GLUEThemeObserver.h"

@class GLUEAccessoryIconButton, GLUEButton, GLUELabel, UIStackView;

@interface SPTPodcastHubImportCardView : EXP_HUBComponentView <GLUEThemeObserver, EXP_HUBComponentViewWithEvents>
{
    id <EXP_HUBComponentEventHandler> _eventHandler;
    id <GLUETheme> _theme;
    UIStackView *_horizontalStack;
    UIStackView *_verticalStack;
    GLUELabel *_titleLabel;
    GLUEButton *_actionButton;
    GLUEAccessoryIconButton *_closeButton;
}

@property(retain, nonatomic) GLUEAccessoryIconButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) GLUEButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIStackView *verticalStack; // @synthesize verticalStack=_verticalStack;
@property(retain, nonatomic) UIStackView *horizontalStack; // @synthesize horizontalStack=_horizontalStack;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)didTapActionButton;
- (void)themeUpdated:(id)arg1;
- (void)setupConstraints;
- (void)setupCloseButton;
- (void)setupActionButton;
- (void)setupTitleLabel;
- (void)setupStackviews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

