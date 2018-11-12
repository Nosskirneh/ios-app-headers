//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTShareEntityDataFactory-Protocol.h"

@class NSString;
@protocol SPTShareTestManager;

@interface SPTShareEntityDataFactoryImplementation : NSObject <SPTShareEntityDataFactory>
{
    id <SPTShareTestManager> _testManager;
}

@property(retain, nonatomic) id <SPTShareTestManager> testManager; // @synthesize testManager=_testManager;
- (void).cxx_destruct;
- (id)provideEntityDataWithItemURI:(id)arg1 contextSourceURI:(id)arg2 itemName:(id)arg3 creatorName:(id)arg4 sourceName:(id)arg5 imageURL:(id)arg6 shareScreenshotImage:(id)arg7 itemType:(unsigned long long)arg8 clipboardLinkTitle:(id)arg9 logContext:(id)arg10;
- (id)initWithTestManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

