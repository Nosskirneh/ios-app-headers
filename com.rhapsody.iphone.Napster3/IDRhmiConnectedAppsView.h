//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDPopupView.h"

@class IDLabel, IDTable;

@interface IDRhmiConnectedAppsView : IDPopupView
{
    IDLabel *_disconnectAppLabel;
    IDTable *_connectedAppsList;
}

@property(retain) IDTable *connectedAppsList; // @synthesize connectedAppsList=_connectedAppsList;
@property(retain) IDLabel *disconnectAppLabel; // @synthesize disconnectAppLabel=_disconnectAppLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3 popupEvent:(long long)arg4 hmiProvider:(id)arg5;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3 popupEvent:(long long)arg4;

@end

