//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStoryboardSegue.h>

@class UIView;

@interface DZRManualEmbedSegue : UIStoryboardSegue
{
    double _transitionDuration;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
- (void).cxx_destruct;
- (void)perform;
- (id)initWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3;

@end

