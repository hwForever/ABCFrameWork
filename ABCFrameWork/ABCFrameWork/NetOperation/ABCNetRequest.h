//
//  ABCNetRequest.h
//  ABCFrameWork
//
//  Created by Robert on 15/4/28.
//  Copyright (c) 2015年 NationSky. All rights reserved.
//

#import "AFHTTPRequestOperationManager.h"
#import "ABCRequestModel.h"

typedef void (^RequestSuccessBlock)(id result, NSError *error);
typedef void (^RequestFailBlock)(id result, NSError *error);
typedef void (^RequestBodyBlock) (id<AFMultipartFormData> formData);

@interface ABCNetRequest : AFHTTPRequestOperationManager

/**
 *  单例方法
 *
 *  @return 网络请求对象
 */
+ (instancetype)sharedNetRequest;

/**
 *  GET请求
 *
 *  @param url             请求URL
 *  @param model           请求参数Model
 *  @param successCallBack 请求成功回掉
 *  @param failCallBack    请求失败回掉
 */
- (void)GetUrl:(NSString *)url
  RequestModel:(ABCRequestModel *)model
RequestSuccess:(RequestSuccessBlock)successCallBack
   RequestFail:(RequestFailBlock)failCallBack;

/**
 *  POST请求
 *
 *  @param url             请求URL
 *  @param model           请求参数Model
 *  @param successCallBack 请求成功回掉
 *  @param failCallBack    请求失败回掉
 */
- (void)PostUrl:(NSString *)url
   RequestModel:(ABCRequestModel *)model
 RequestSuccess:(RequestSuccessBlock)successCallBack
    RequestFail:(RequestFailBlock)failCallBack;

/**
 *  POST请求（上传数据）
 *
 *  @param url             请求URL
 *  @param model           请求参数Model
 *  @param bodyBlock       请求体数据
 *  @param successCallBack 请求成功回掉
 *  @param failCallBack    请求失败回掉
 */
- (void)PostUrl:(NSString *)url
   RequestModel:(ABCRequestModel *)model
           Body:(RequestBodyBlock)bodyBlock
 RequestSuccess:(RequestSuccessBlock)successCallBack
    RequestFail:(RequestFailBlock)failCallBack;

@end
