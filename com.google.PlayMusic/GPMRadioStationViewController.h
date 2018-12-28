//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMTabbedViewController.h"

#import "GPMBannerAdDisplay-Protocol.h"
#import "GPMRadioStationAnnotationLoaderDelegate-Protocol.h"
#import "GPMRotatingArtProviderDelegate-Protocol.h"

@class GPMArtRequestTicket, GPMRadioStationCollectionViewController, GPMRotatingArtProvider, GPMTransitioningCardView, NSString, RadioStation, UIImage;

@interface GPMRadioStationViewController : GPMTabbedViewController <GPMRadioStationAnnotationLoaderDelegate, GPMRotatingArtProviderDelegate, GPMBannerAdDisplay>
{
    UIImage *_heroImage;
    GPMRotatingArtProvider *_rotatingArtProvider;
    RadioStation *_radioStation;
    GPMArtRequestTicket *_artRequestTicket;
    GPMRadioStationCollectionViewController *_radioCollectionVC;
    GPMTransitioningCardView *_cardTransitioningView;
    _Bool _isTransitioningIn;
    _Bool _isTransitioningOut;
}

- (void).cxx_destruct;
- (double)heroImageHeight;
- (double)heroImageAspectRatio;
- (_Bool)transition:(id)arg1 shouldReparentTransitioningView:(id)arg2 forKey:(id)arg3;
- (void)didEndTransition:(id)arg1 toViewController:(id)arg2;
- (void)willBeginTransition:(id)arg1 toViewController:(id)arg2;
- (id)outgoingTransitioningViewForKey:(id)arg1 transition:(id)arg2;
- (id)incomingTransitioningViewLayoutForKey:(id)arg1 transition:(id)arg2 transitioningView:(id)arg3 withContainerBounds:(struct CGRect)arg4;
- (void)setCardTransitioningView:(id)arg1;
- (id)outgoingTransitioningViewKeysForTransition:(id)arg1;
- (id)incomingTransitioningViewKeysForTransition:(id)arg1;
- (id)navigationStyle;
- (void)didLoadRadioStationAnnotation:(id)arg1;
- (void)didLoadImage:(id)arg1;
- (void)tabbedHeaderController:(id)arg1 heroImageWithCallback:(CDUnknownBlockType)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithRadioStation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

