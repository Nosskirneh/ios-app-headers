//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCButton.h"

@class GRWMessageAction;

@interface GRWRichCardButton : MDCButton
{
    GRWMessageAction *_action;
    unsigned long long _style;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) GRWMessageAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)init;

@end

