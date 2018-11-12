//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HUBComponent-Protocol.h"

@class NSSet, UIView;
@protocol GLUETheme;

@interface SPTConcertsForArtistNoConcertsTextRowComponent : NSObject <HUBComponent>
{
    UIView *_view;
    id <GLUETheme> _theme;
}

@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)prepareViewForReuse;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (void)configureViewWithModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (void)loadView;
@property(readonly, nonatomic) NSSet *layoutTraits;
- (id)initWithTheme:(id)arg1;

@end

