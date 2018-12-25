//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GWAPageDetails, NSDictionary, NSError, NSIndexPath, NSString, OrchFormFieldReference, OrchLabel, OrchLink, UIViewController;
@protocol GWAFlowSection;

@protocol GWAFlowSectionDelegate <NSObject>
- (void)handlePageDetails:(GWAPageDetails *)arg1;
- (void)section:(id <GWAFlowSection>)arg1 presentsErrorMessage:(NSString *)arg2;
- (void)section:(id <GWAFlowSection>)arg1 didFinishPendingTaskWithError:(NSError *)arg2;
- (void)section:(id <GWAFlowSection>)arg1 uploadParameters:(NSDictionary *)arg2 toURL:(NSString *)arg3 completionHandler:(void (^)(NSData *, NSError *))arg4;
- (void)forwardToNextFocusableFieldInSection:(id <GWAFlowSection>)arg1 field:(id)arg2;
- (void)section:(id <GWAFlowSection>)arg1 needsDocumentFromURL:(NSString *)arg2 requestMessage:(NSString *)arg3 completionHandler:(void (^)(NSData *, NSError *))arg4;
- (void)section:(id <GWAFlowSection>)arg1 startPollingWithTimeInterval:(double)arg2;
- (void)section:(id <GWAFlowSection>)arg1 submitWithActivityIndicator:(_Bool)arg2;
- (void)section:(id <GWAFlowSection>)arg1 triggeredRefreshWithFormField:(OrchFormFieldReference *)arg2;
- (void)sectionWantsFormReload:(id <GWAFlowSection>)arg1;
- (void)section:(id <GWAFlowSection>)arg1 changedCountryCode:(NSString *)arg2;
- (void)sectionNeedsExitWidget:(id <GWAFlowSection>)arg1;
- (void)section:(id <GWAFlowSection>)arg1 dismissModalViewControllerAnimated:(_Bool)arg2;
- (void)section:(id <GWAFlowSection>)arg1 presentModalViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
- (void)sectionWantsFocusAtNextAvailableSection:(id <GWAFlowSection>)arg1;
- (void)section:(id <GWAFlowSection>)arg1 wantsFocusAtIndexPath:(NSIndexPath *)arg2;
- (void)sectionNeedsReload:(id <GWAFlowSection>)arg1;

@optional
- (void)section:(id <GWAFlowSection>)arg1 labelTapped:(OrchLabel *)arg2;
- (void)section:(id <GWAFlowSection>)arg1 linkTapped:(OrchLink *)arg2;
- (void)sectionWantsFormReload:(id <GWAFlowSection>)arg1 shouldFocusOnGivenSection:(_Bool)arg2;
@end

