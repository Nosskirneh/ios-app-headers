//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDCSnackbarSuspensionToken-Protocol.h"

@class MDCSnackbarManager, NSString, NSUUID;

@interface MDCSnackbarManagerSuspensionToken : NSObject <MDCSnackbarSuspensionToken>
{
    NSUUID *_identifier;
    NSString *_category;
    MDCSnackbarManager *_manager;
}

@property(nonatomic) __weak MDCSnackbarManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

