//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC7TV4Play12ModalManager : NSObject
{
    // Error parsing type: , name: isDisplayingModal
    // Error parsing type: , name: interactor
    // Error parsing type: , name: numberOfExternalModalsShowing
    // Error parsing type: , name: modalsToDisplay
}

+ (void)setShared:(id)arg1;
+ (id)shared;
- (CDUnknownBlockType).cxx_destruct;
- (void)presentNewViewControllerOnViewController:(id)arg1 animated:(_Bool)arg2 placedInside:(CDUnknownBlockType)arg3;
- (id)init;
- (void)stopShowingExternalModal;
- (void)startShowingExternalModal;

@end

