//
//  MEKitObjC.h
//  MEKitObjC
//
//  Created by Mitsuharu Emoto on 2015/03/31.
//  Copyright (c) 2015年 Mitsuharu Emoto. All rights reserved.
//

#import <Foundation/Foundation.h>

// NSLog
#ifdef DEBUG
#define DLOG(fmt, ...) NSLog((@"%s [%d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#define LOG(fmt, ...) NSLog((@"%s [%d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#define DLOG(fmt, ...)
#define LOG(...)
#endif

#define DLOGA(fmt, ...) NSLog((@"%s [%d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#define LOGA(fmt, ...) NSLog((@"%s [%d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);

// In this header, you should import all the public headers of your framework using statements like #import <MEKitObjC/PublicHeader.h>

#import "Categories.h"

#import "MEOAuthorization.h"

#import "MEOCoreDataManager.h"
#import "MEOXMLReader.h"
#import "MEOCacheManager.h"

#import "MEOApiManager.h"
#import "MEOCachedData.h"
#import "MEODownloader.h"
#import "MEOWebViewController.h"

#import "MEOAlertView.h"
#import "MEOActionSheet.h"
#import "MEONotificationWindow.h"
#import "MEOLocationService.h"
#import "MEOActivityHelper.h"
#import "MEOIndicatorView.h"
#import "MEOSystemStatus.h"
#import "MEOMemory.h"
#import "MEOSensor.h"

#import "MEOTableDataSource.h"
#import "MEOTableDataSourceManager.h"
#import "MEOTableViewCell.h"

#import "MEOCollectionDataSource.h"
#import "MEOCollectionDataSourceManager.h"

#import "MEOUtilities.h"
#import "MEOKeyChain.h"

#import "MEOCaptureSessionManager.h"



@interface MEKitObjC : NSObject


@end
