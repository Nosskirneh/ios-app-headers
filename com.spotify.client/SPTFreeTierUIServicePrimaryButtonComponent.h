//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "EXP_HUBComponent-Protocol.h"

@class NSSet;
@protocol GLUETheme;

@interface SPTFreeTierUIServicePrimaryButtonComponent : NSObject <EXP_HUBComponent>
{
    id <GLUETheme> _theme;
}

@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)createViewWithFrame:(struct CGRect)arg1;
- (id)initWithTheme:(id)arg1;

@end

