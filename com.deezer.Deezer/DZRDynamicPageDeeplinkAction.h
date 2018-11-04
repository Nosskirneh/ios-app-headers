//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRDynamicPageLoggableAction-Protocol.h"

@class NSDictionary, NSString;
@protocol DZRDynamicPageActionDelegate;

@interface DZRDynamicPageDeeplinkAction : NSObject <DZRDynamicPageLoggableAction>
{
    NSString *_name;
    NSString *_kind;
    NSDictionary *_options;
    id <DZRDynamicPageActionDelegate> _delegate;
    NSString *_deeplink;
    id _deeplinkObject;
    NSString *_logID;
    NSString *_logNavigationPath;
}

@property(copy, nonatomic) NSString *logNavigationPath; // @synthesize logNavigationPath=_logNavigationPath;
@property(copy, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(retain, nonatomic) id deeplinkObject; // @synthesize deeplinkObject=_deeplinkObject;
@property(copy, nonatomic) NSString *deeplink; // @synthesize deeplink=_deeplink;
@property(nonatomic) __weak id <DZRDynamicPageActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)logActionExecution;
- (void)performAction;
- (id)initWithKind:(id)arg1 name:(id)arg2 deeplink:(id)arg3 options:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

