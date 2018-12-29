//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GADNObserverCollection;
@protocol GADNMediaContentDisplaying;

@interface GADNMediaView : UIView
{
    id <GADNMediaContentDisplaying> _mediaContent;
    UIView *_mediaView;
    GADNObserverCollection *_observers;
}

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setMediaContent:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end
