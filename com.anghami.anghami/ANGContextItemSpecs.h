//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ANGContextItemSpecs : NSObject
{
}

+ (_Bool)performActionForItem:(id)arg1 action:(unsigned long long)arg2 inVC:(id)arg3 navigationControllerForPush:(id)arg4;
+ (id)imageForItemAction:(unsigned long long)arg1 item:(id)arg2;
+ (id)titleForItemAction:(unsigned long long)arg1 item:(id)arg2;
+ (void)downloadImageForItemAction:(unsigned long long)arg1 item:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)supportedActionsForItem:(id)arg1 inClass:(Class)arg2 disableDownloadOnVideo:(_Bool)arg3;

@end
