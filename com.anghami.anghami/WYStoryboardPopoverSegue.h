//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStoryboardSegue.h>

@class WYPopoverController;

@interface WYStoryboardPopoverSegue : UIStoryboardSegue
{
    WYPopoverController *popoverController;
    id sender;
    unsigned long long arrowDirections;
    unsigned long long options;
    _Bool animated;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)popoverControllerWithSender:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(_Bool)arg3 options:(unsigned long long)arg4;
- (id)popoverControllerWithSender:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)perform;

@end
