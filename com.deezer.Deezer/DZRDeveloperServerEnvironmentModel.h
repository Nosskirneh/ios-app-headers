//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRDeveloperSettingsModelItem-Protocol.h"

@class NSString, UINavigationController;

@interface DZRDeveloperServerEnvironmentModel : NSObject <DZRDeveloperSettingsModelItem>
{
    UINavigationController *_navigationController;
}

@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
- (void)actionForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)cellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithNavigationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

